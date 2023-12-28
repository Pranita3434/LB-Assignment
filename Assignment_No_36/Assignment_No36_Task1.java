
import java.util.*;

class Assignment_No36_Task1 {
    public static String StrNCatX(String src, String dest, int iNo) {

        int iCnt = 0;
        int Count = 0;
        char Arr[] = dest.toCharArray();
        for (iCnt = 0; iCnt < iNo; iCnt++) {

            src = src + Arr[iCnt];
        }
        return src;
    }

    public static void main(String Arg[]) {

        Scanner sobj = new Scanner(System.in);

        String str1 = null;
        System.out.println("ENter The First String : ");
        str1 = sobj.nextLine();

        String str2 = null;
        System.out.println("ENter The Second String : ");
        str2 = sobj.nextLine();

        int N = 0;
        System.out.println("Value of i : ");
        N = sobj.nextInt();

        String FinalStr = null;
        FinalStr = StrNCatX(str1, str2, N);

        System.out.println("Final str is  : " + FinalStr);

        sobj.close();

    }
}