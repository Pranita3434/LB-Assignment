import java.util.*;

class Assignment_No34_Task1 {
    public static int CountEvenDigit(int iValue) {
        int iCountEven = 0;

        while (iValue != 0) {
            int iDigit = iValue % 10;
            iValue = iValue / 10;

            if (iDigit % 2 == 0) {
                iCountEven++;
            }
        }
        return iCountEven;
    }

    public static void main(String args[]) {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0;

        System.out.println("Enter The Number : ");
        iNo1 = sobj.nextInt();

        int iRet = 0;
        iRet = CountEvenDigit(iNo1);
        System.out.println("Total Even Digit in the Number is : " + iRet);

        sobj.close();
    }
}