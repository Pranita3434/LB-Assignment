import java.util.*;

class Assignment_No36_Task2 {
    public static boolean StrCmpX(String src, String dest) {

        int iCnt = 0;
        int Count = 0;
        char Arr[] = src.toCharArray();
        char Brr[] = dest.toCharArray();

        for (iCnt = 0; iCnt < Arr.length; iCnt++) {

            if (Arr[iCnt] != Brr[iCnt]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String Arg[]) {

        Scanner sobj = new Scanner(System.in);

        String str1 = null;
        System.out.println("ENter The First String : ");
        str1 = sobj.nextLine();

        String str2 = null;
        System.out.println("ENter The Second String : ");
        str2 = sobj.nextLine();

        boolean StrF = false;
        StrF = StrCmpX(str1, str2);

        if (StrF == true) {
            System.out.println("TRUE");
        } else {
            System.out.println("FALSE");
        }

        sobj.close();

    }
}