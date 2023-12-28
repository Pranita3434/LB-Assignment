
import java.util.*;

class Assignment_No36_Task4 {
    public static String StrRevTog(String str) {

        int iCnt = 0;
        int Count = 0;
        char Arr[] = str.toCharArray();

        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            if ((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z')) {
                Arr[iCnt] = (char) (Arr[iCnt] + 32);
            } else {
                Arr[iCnt] = (char) (Arr[iCnt] - 32);
            }
        }

        return new String(Arr);
    }

    public static void main(String Arg[]) {

        Scanner sobj = new Scanner(System.in);

        String str1 = null;
        System.out.println("ENter The String : ");
        str1 = sobj.nextLine();

        String FinalStr = null;
        FinalStr = StrRevTog(str1);

        System.out.println("Final str is  : " + FinalStr);

        sobj.close();

    }
}