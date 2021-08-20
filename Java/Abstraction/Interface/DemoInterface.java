interface Person{
    public void setName(String name);
}

class Student implements Person{
    public void setName(String name){
        System.out.println("Student: " + name);
    }
}

class Teacher implements Person{
    public void setName(String name){
        System.out.println("Teacher: " + name);
    }
}

public class DemoInterface {
    public static void main(String[] args) {
        Person s = new Student();
        Person t = new Teacher();
        s.setName("John");
        t.setName("Melvic");
    }
}
