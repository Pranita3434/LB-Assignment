
import java.util.*;

class Assignment_No36_Task3 {
    public static boolean StrNCmpX(String src, String dest, int iNo) {

        int iCnt = 0;
        char arr[] = src.toCharArray();
        char brr[] = dest.toCharArray();

        if (iNo > brr.length) {
            String str = new String(arr) + new String(brr);
            char crr[] = str.toCharArray();

            for (iCnt = 0; iCnt < iNo; iCnt++) {

                if (crr[iCnt] != arr[iCnt]) {
                    return false;
                }
            }
            return true;

        } else {
            for (iCnt = 0; iCnt < iNo; iCnt++) {

                if (arr[iCnt] != brr[iCnt]) {
                    return false;
                }
            }
            return true;
        }

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

        boolean StrF = false;
        StrF = StrNCmpX(str1, str2, N);

        if (StrF == true) {
            System.out.println("TRUE");
        } else {
            System.out.println("FALSE");
        }

        sobj.close();

    }
}