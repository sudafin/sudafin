package com.douDiZhu;
import java.util.*;
import java.util.ArrayList;
import java.util.TreeSet;

public class addRemoveWay {
    public static void TreeHad(ArrayList<Integer> sc, TreeSet<Integer> s1, TreeSet<Integer> s2, TreeSet<Integer> s3, LinkedList<Integer> s4)
    {
        for(int i=0;i<sc.size();i++){
        if(i<=16){
            s1.add(sc.get(i));
        }
        else if (i<=33){
            s2.add(sc.get(i));
        }
        else if(i<=50){
            s3.add(sc.get(i));
        }
        else{
            s4.add(sc.get(i));
        }
      }
        Collections.sort(s4);
   }
    public static void addPorker(TreeSet<Integer> sNumber, LinkedList<Integer> s4){
        sNumber.addAll(s4);
    }
    public static void removePorker(String a1,TreeSet<Integer> sNumber,HashMap<Integer,String> ww){
        for(int i=0;i<ww.size();i++){
            if(ww.get(i).equals(a1)){
                sNumber.remove(i);
            }
        }
    }
}
