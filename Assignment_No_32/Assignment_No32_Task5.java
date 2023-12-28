/* 
import java.util.*;

class Assignment_No32_Task5 {
    public static void Reverse(String str) {
        int i = 0;
        int iCount = 0;
        int Temp = 0;
        char Arr[] = str.toCharArray();
        String str1 = ;

        for (i = Arr.length; i < 1; i++) {
            str1 = str + Arr[i];
        }
        System.out.println("Enter Your String : " + Temp);

    }

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter Your String : ");
        str = sobj.nextLine();

        Reverse(str);

        sobj.close();
    }
}

*/

import java.util.*;

class Assignment_No32_Task5 {

    public static void main(String Arg[]) {

        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("ENter Your name : ");
        str = sobj.nextLine();

        System.out.println("Your Name is :" + str);

        System.out.println("Length of Your name is : " + str.length());
        String str1 = null;
        int iCnt = 0;
        for (iCnt = str.length(); iCnt < 0; iCnt--) {
            str1 = str + str.charAt(iCnt);

        }
        System.out.println("" + str1);
        sobj.close();

    }
}