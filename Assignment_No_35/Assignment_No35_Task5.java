import java.util.*;

class Assignment_No35_Task5 {
    public static int OddProduct(int Brr[]) {
        int iCnt = 0;
        int OddPro = 1;

        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            if ((Brr[iCnt] % 2) != 0) {
                OddPro = OddPro * Brr[iCnt];
            }
        }
        if (OddPro == 1) {
            return 0;
        } else {
            return OddPro;
        }

    }

    public static void main(String Args[]) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter The Numbers : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        int iCnt = 0;
        System.out.println("The elements in the Array : ");
        for (iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        int iRet = 0;
        iRet = OddProduct(Arr);
        System.out.println("Product of Odd Number is " + iRet);

    }
}