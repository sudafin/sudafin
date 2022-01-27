package com.douDiZhu;


import java.util.*;

public class showWay {
    public static void firstShow(String name, TreeSet<Integer> st, HashMap<Integer,String> ww){
            System.out.print(name+"的牌\t");
        for(Integer key:st){
            String MyKey=ww.get(key);
            System.out.print(MyKey+"\t");
        }
        System.out.println();
    }
    public static void firstShow(String name, LinkedList<Integer> st, HashMap<Integer,String> ww){
        System.out.print(name+"的牌\t\t");
        for(Integer key:st){
            String MyKey=ww.get(key);
            System.out.print(MyKey+"\t");
        }
        System.out.println();
    }
    public static void finalShow(String name,TreeSet<Integer> st,HashMap<Integer,String> ww){
        System.out.print(name+"的牌\t");
        for(Integer key:st){
            String MyKey=ww.get(key);
            System.out.print(MyKey+"\t");
        }
        System.out.println();
    }
}
