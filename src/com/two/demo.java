package com.two;

public class demo {
    public static void main(String[] args) {
        animal s1=new animal();
        inter sc=new cat();
        s1.way(sc);
        inter s2=new cat();//inter s2=animalsOperator a;本质上inter=new cat();
        s2.eat();// a.eat();
    }
}
