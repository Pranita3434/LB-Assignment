import java.util.*;

class Assignment_No35_Task3 {
    public static int LastOcc(int Brr[], int No) {
        int iCnt = 0;
        int iTemp = 0;

        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            if (No == Brr[iCnt]) {
                iTemp = iCnt;
            }

        }
        return iTemp;

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

        int iRet = 0;
        iRet = LastOcc(Arr, iSearValue);
        System.out.println("Last occurenece of the " + iSearValue + " is " + iRet);

    }
}