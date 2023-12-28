import java.util.*;

class Assignment_No35_Task4 {
    public static void Display(int Brr[], int Start, int End) {
        int iCnt = 0;

        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            if ((Start < Brr[iCnt]) && (End > Brr[iCnt])) {
                System.out.println(" Num : " + Brr[iCnt]);
            }
        }
    }

    public static void main(String Args[]) {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        System.out.println("Enter The Numbers : ");
        iSize = sobj.nextInt();

        int iStart = 0;
        System.out.println("Enter The number Start From :  ");
        iStart = sobj.nextInt();

        int iEnd = 0;
        System.out.println("Enter The number End :  ");
        iEnd = sobj.nextInt();

        int Arr[] = new int[iSize];
        int iCnt = 0;
        System.out.println("The elements in the Array : ");
        for (iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sobj.nextInt();
        }

        Display(Arr, iStart, iEnd);

    }
}