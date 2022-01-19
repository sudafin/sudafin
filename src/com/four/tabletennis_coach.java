package com.four;

public class tabletennis_coach extends coach implements english {
    public tabletennis_coach(){
        super();
    }
    public tabletennis_coach(String name, int age){
        super(name,age);
    }
    public void teach(){
        System.out.println("教乒乓球");
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
