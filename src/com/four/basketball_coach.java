package com.four;

public class basketball_coach extends coach implements english {
    public basketball_coach(){
        super();
    }
    public basketball_coach(String name, int age){
        super(name,age);
    }
    @Override
    public void teach(){
        System.out.println("教篮球");
    }
    public void eat(){
        System.out.println("牛奶");
    }
    @Override
    public void studyEnglish(){
        System.out.println("学习英语");
    }  public void way(){
        System.out.println("做飞机");
    }

}
