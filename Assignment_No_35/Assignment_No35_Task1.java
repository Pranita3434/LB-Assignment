import java.util.*;

class Assignment_No35_Task1 {
    public static boolean Check(int Brr[], int No) {
        int iCnt = 0;

        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            if (No == Brr[iCnt]) {
                return true;
            }

        }
        return false;

    }

    public static void main(String Args[]) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter The Numbers : ");
        iSize = sobj.nextInt();

        int iSearValue = 0;
        System.out.println("Enter The number Which You want to search :  ");
        iSearValue = sobj.nextInt();

        int Arr[] = new int[iSize];
        int iCnt = 0;
        System.out.println("The elements in the Array : ");
        for (iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        boolean iRet = false;
        iRet = Check(Arr, iSearValue);

        if (iRet == true) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }

    }
}