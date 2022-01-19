package com.four;

public abstract class person {
    private int age;
    private String name;
    public person(){}
    public person(int age,String name){
        this.age=age;
        this.name=name;
    }
    public void setName(String name){
        this.name=name;
    }
    public void setAge(int age){
        this.age=age;
    }
    public int getAge(){
        return age;
    }
    public String getName(){
        return name;
    }
    public abstract void way();
}
