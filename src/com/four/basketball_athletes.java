package com.four;

public class basketball_athletes extends athletes implements english{
    public basketball_athletes(){
        super();
    }
    public basketball_athletes(String name, int age){
        super(name,age);
    }
    public void study(){
        System.out.println("学习篮球");
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
