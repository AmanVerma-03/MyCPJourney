class calculator {
    public int add(int n1,int n2) {
        System.out.println("add is ");
        int r = n1 + n2 ;
        return r;
    }
}

public class Main{
    public static void main(String [] args)
    {
        int num1 = 4 ;
        int num2 = 10 ;
        calculator  calc = new calculator();
        int result = calc.add(num1,num2);
        System.out.println(result);
    }
}