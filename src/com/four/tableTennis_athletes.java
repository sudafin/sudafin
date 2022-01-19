package com.four;

public class tableTennis_athletes extends athletes implements english{
    public tableTennis_athletes(){
        super();
    }
    public tableTennis_athletes(String name, int age){
        super(name,age);
    }
    public void study(){
        System.out.println("学习乒乓");
    }
    public void eat(){
        System.out.println("牛奶");
    }
    public void studyEnglish(){
        System.out.println("学习英语");
    }
    public void way(){
        System.out.println("做飞机");
    }
}
