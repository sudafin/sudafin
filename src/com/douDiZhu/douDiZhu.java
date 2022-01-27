package com.douDiZhu;

import java.util.*;

import static com.douDiZhu.showWay.finalShow;
import static com.douDiZhu.showWay.firstShow;
import static com.douDiZhu.addRemoveWay.*;

public class douDiZhu {
    public static void main(String[] args) {
        int x = 0,num1=0,num2=0,num3 = 0;
        // 发牌
        HashMap<Integer, String> si = new HashMap<>();
        ArrayList<Integer> sc = new ArrayList<>();
        String[] numbers = {"3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2"};
        String[] colors = {"♣", "♦", "♠", "♥"};
        String[] counts = {"Small", "Big"};
        String[] brand = {"Joker"};
        for (String number : numbers) {
            for (String color : colors) {
                si.put(x, color + number);
                sc.add(x);
                x++;
            }
        }
        for (String joker : brand)
            for (String count : counts) {
                si.put(x, count + " " + joker);
                sc.add(x);
                x++;
            }
        // 洗牌
        Collections.shuffle(sc);
        // 展示牌
        TreeSet<Integer> s1 = new TreeSet<>(); //如果这里用的是ArrayList输出数字不会排序,而TreeSet会帮你排序好数字
        TreeSet<Integer> s2 = new TreeSet<>();
        TreeSet<Integer> s3 = new TreeSet<>();
        LinkedList<Integer> s4 = new LinkedList<>();
        TreeHad(sc, s1, s2, s3, s4);
        firstShow("刘德华", s1, si);
        firstShow("周润发", s2, si);
        firstShow("周星驰",s3, si);
        firstShow("底牌",s4, si);
        // 抢地主
        Scanner ti = new Scanner(System.in);
        System.out.println("刘德华:抢地主||不抢");
        String q1 = ti.nextLine();
        System.out.println("周润发:抢地主||不抢");
        String q2 = ti.nextLine();
        System.out.println("周星驰:抢地主||不抢");
        String q3 = ti.nextLine();
        if (Objects.equals(q1, "抢地主")) {
            addPorker(s1, s4);
        } else if (Objects.equals(q2, "抢地主")) {
            addPorker(s2, s4);
        } else if (Objects.equals(q3, "抢地主")) {
            addPorker(s3, s4);
        }
        else {
            System.out.println("重新运行游戏进行洗牌");
        }
        finalShow("刘德华", s1, si);
        finalShow("周润发", s2, si);
        finalShow("周星驰", s3, si);
        // 进行出牌
        while(true) {
            Set<Integer> p = si.keySet();
            while (true) {
                System.out.println("刘德华出牌");
                String a1 = ti.nextLine();
                for (Integer i : p) {
                    if (Objects.equals(si.get(i), a1)) {
                        num1 = i;
                    }
                }
                if(num3<num1){
                    removePorker(a1, s1, si);
                    break;
                }
                else {
                    System.out.println("出点数大的牌");
                }
                finalShow("刘德华", s1, si);
                finalShow("周润发", s2, si);
            }
            while(true){
            System.out.println("周润发出牌");
            String a2=ti.nextLine();
            for(Integer i:p){
                if(Objects.equals(si.get(i), a2)){
                    num2=i;
                }
            }
            if(num1<num2){
                removePorker(a2,s2,si);
                break;
            }
            else {
                System.out.println("出点数大的牌");
            }
                finalShow("周润发", s2, si);
                finalShow("周星驰", s3, si);
            }
            finalShow("周润发", s2, si);
            while (true) {
                System.out.println("周星驰出牌");
                String a3 = ti.nextLine();
                for (Integer i : p) {
                    if (Objects.equals(si.get(i), a3)) {
                        num3 = i;
                    }
                }
                if (num2 < num3) {
                    removePorker(a3, s3, si);
                    break;
                } else {
                    System.out.println("出点数大的牌");
                }
                finalShow("周星驰", s3, si);
                finalShow("刘德华", s1, si);
            }
            // 判断输赢
            if(s1.size()==0){
                System.out.println("刘德华赢了");
                break;
            }
            else if(s2.size()==0){
                System.out.println("周润发赢了");
                break;
            }
            else  if(s3.size()==0){
                System.out.println("周星驰赢了");
                break;
            }
        }
    }
}
