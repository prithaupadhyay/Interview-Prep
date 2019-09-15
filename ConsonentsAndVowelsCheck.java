/*
Program to Compare the number of Vowels and Consonents.
Author: Pritha Upadhyay

Approach: 
Here the aim was to compare the number of Vowels and Consonents in a string. The catch here is that the string can have spaces in between too. Hence, we need to add condtions for vowels, consonents as well as spaces.
*/
import java.util.*;
import java.lang.*;
import java.io.*;
class ConsonentsAndVowelsCheck
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        boolean flag = false;
        while(t-- > 0){
            String s=sc.nextLine();
            Geeks obj=new Geeks();
            obj.checkString(s);
        }
    }
}

class Geeks{
        
    static void checkString(String s){
        int v=0;
        int c=0;
            
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='a' || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o' || s.charAt(i)=='u'){
                    v++;
                }
            else if(s.charAt(i)==' '){
                continue;
            }
                
            else{
                c++;
            }
        }
            
        if(v>c)
            System.out.print("Yes");
        else if(c>v)
            System.out.print("No");
        else
           System.out.print("Same");
            
            System.out.println();
        }
    }