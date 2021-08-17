//Written By: Nishant Movaliya


// You need to concatenate 2 numbers (concatenate alternate digits of two numbers).
//  it must be like this :

//   1. Let's say first number is 9999, and second number is 8888, then the result should be 98989898

//   2. First number is 10, and second number is 11, then result should be 1101

//   3. First number is 11 & second number is 2222, then result should be 121222

//   4. First number if 2222 & second number is 11, then answer should be 212122

//   5. If the resulting number is greater than 10000000000, then result must be -1

// Note : Any in-built string functions must not be used, except string-length function.




import java.util.Scanner;


public class ConcateNumber {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter  1st number:");
        long num1 = Sc.nextLong();
        System.out.println("Enter  2nd number:");
        long num2 = Sc.nextLong();

        long tmp_n1 = num1;
        long  tmp_n2 = num2;
        int l1=0, l2=0;

//..............Count length..................
        while (tmp_n1>0){
            tmp_n1 /= 10;
            l1++;
        }
        while (tmp_n2>0){
            tmp_n2 /= 10;
            l2++;
        }

        long n1[] = new long[l1];
        long n2[] = new long[l2];
        
        long n3[] = new long[l1+l2];

//.............Store Digit..........................
        for(int i=l1-1; i>=0; i--){
            long d = num1 % 10;
            n1[i] = d;
            num1 /= 10;
        }

        for(int i=l2-1; i>=0; i--){
            long d = num2 % 10;
            n2[i] = d;
            num2 /= 10;
        }

        int n=0;
        for(int j=0; j<l1+l2; j++){
            if(j<l1){
                n3[n] = n1[j];
                n++;
            }
            if(j<l2){
                n3[n] = n2[j];
                n++;
            }
        }

        System.out.println();
        String s="";

        for(int i=0; i<l1+l2; i++){
            //System.out.print(n3[i]);
            s = s + n3[i]+"";
        } 
        
 
    
    long val = Long.parseLong(s);
    long limit = 10000000000L; //Long.parseLong("10000000000");
    
//.. If the resulting number is greater than 10000000000, then result must be -1
    if(val >=limit) 
    {
        val = -1;
    }

      System.out.print("Output: "+ val);

    }
}
