import java.util.*;

class Assignment_No32_Task1 {
    public static int CountCapital(String str) {
        int i = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();

        for (i = 0; i < Arr.length; i++) {
            if ((Arr[i] >= 'A') && (Arr[i] <= 'Z')) {
                iCount++;
            }
        }
        return iCount;
    }

    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter Your String : ");
        str = sobj.nextLine();

        int iRet = 0;
        iRet = CountCapital(str);
        System.out.println("Capital Characters in The String is : " + iRet);

        sobj.close();
    }
}