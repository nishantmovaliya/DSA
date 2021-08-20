// Write a function that divides a phrase into word buckets, with each bucket containing N or fewer characters. Only include full words inside each bucket.

// Notes -
// -Spaces count as one character.
// -Trim beginning and end spaces for each word bucket (see final example). If buckets are too small to hold a single word, return an empty array: []
// -The final goal isn't to return just the words with a length equal (or lower) to the given n, but to return the entire given phrase bucketized (if possible). So, for the specific case of "by'' the only word with a proper length, the phrase can't be bucketized, and the returned array has to be empty.

// Examples:
// bucketize("she sells sea shells by the sea", 10)
// ➞ ["she sells", "sea shells", "by the sea"]

// bucketize("the mouse jumped over the cheese", 7)
// ➞ ["the", "mouse", "jumped", "over", "the", "cheese"]

// bucketize("fairy dust coated the air", 20)
// ➞ ["fairy dust coated", "the air"]

// bucketize("a b c d e", 2)
// ➞ ["a", "b", "c", "d", "e"]

import java.util.*;

class Bucket {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String sentence = sc.nextLine();
        System.out.println("Enter a number");
        int num = sc.nextInt();

        List <String> bucket = new ArrayList<>();
        

        for(int i = 0; i < sentence.length() ; i= i+num) {
            
           
                int index = i;
                try{
                        String tmp_str = sentence.substring(index, index +num);
                        bucket.add(tmp_str.trim());
                }
                catch(Exception e){

                }
        }
        System.out.print(bucket);

    }
}






// PS E:\DSA\Java\Tech_Compose> javac Bucket.java
// PS E:\DSA\Java\Tech_Compose> java Bucket
// the mouse jumped over the cheese
// Enter a number
// 7
// the mouException in thread "main" java.lang.StringIndexOutOfBoundsException: begin 0, end -1, length 32
//         at java.base/java.lang.String.checkBoundsBeginEnd(String.java:3319)
//         at java.base/java.lang.String.substring(String.java:1874)
//         at Bucket.main(Bucket.java:39)
// PS E:\DSA\Java\Tech_Compose> 