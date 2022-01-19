package com.four;

public abstract class athletes extends person{
    public athletes(){
        super();
    }
    public athletes(String name,int age){
        super(age, name);
    }
    public abstract void study();
    public abstract void way();
}
