package com.four;

public abstract class coach extends person {
    public coach(){
        super();
    }
    public coach(String name,int age){
        super(age, name);
    }
    public abstract void teach();
    public abstract void way();
}
