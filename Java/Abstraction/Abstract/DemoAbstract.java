abstract class Person{
    abstract public void setName(String name);
}

class Student extends Person {
    public void setName(String name){
        System.out.println("Student: "+name);
    }
}

class Teacher extends Person {
    public void setName(String name){
        System.out.println("Teacher: " + name);
    }
}

public class DemoAbstract{
    public static void main(String[] args) {
        Person s = new Student();
        Person t = new Teacher();
        s.setName("John");
        t.setName("Melvic");

    }
}