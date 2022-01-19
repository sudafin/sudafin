package com.four;

public class demo {
    public static void main(String[] args) {
        basketball_athletes b1=new basketball_athletes();
        basketball_coach b2=new basketball_coach();
        tableTennis_athletes t1=new tableTennis_athletes();
        tabletennis_coach t2=new tabletennis_coach();
        tableTennis_athletes t3=new tableTennis_athletes("张继科",18);
        tabletennis_coach t4=new tabletennis_coach("许昕",21);
        b1.setAge(18);
        b1.setName("姚明");
        System.out.println(b1.getName()+"\t\t"+b1.getAge());
        b1.way();
        b1.study();
        b1.studyEnglish();
        b1.eat();
        b2.setAge(60);
        b2.setName("詹姆斯");
        System.out.println(b2.getName()+"\t"+b2.getAge());
        b2.way();
        b2.teach();
        b2.studyEnglish();
        b2.eat();
        System.out.println("----------------------------");
        t1.setAge(18);
        t1.setName("马龙");
        System.out.println(t1.getName()+"\t\t"+t1.getAge());
        t1.way();
        t1.study();
        t1.studyEnglish();
        t1.eat();
        t2.setAge(50);
        t2.setName("刘国梁");
        System.out.println(t2.getName()+"\t"+t2.getAge());
        t2.way();
        t2.teach();
        t2.studyEnglish();
        t2.eat();
        System.out.println("----------------------------");
        System.out.println(t3.getName()+"\t"+t3.getAge());
        t3.way();
        t3.study();
        t3.studyEnglish();
        t3.eat();
        System.out.println(t4.getName()+"\t\t"+t4.getAge());
        t4.way();
        t4.teach();
        t4.studyEnglish();
        t4.eat();
    }
}
