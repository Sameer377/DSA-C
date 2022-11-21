/*Author : Sameer Shaikh 
  Date : 21/11/2022
*/
public class Practical_1 {

    public static void allMath(double x, double y) {
        System.out.println("Maximum number of x and y is: " + Math.max(x, y));
        System.out.println("Square root of y is: " + Math.sqrt(y));
        System.out.println("Square cube root of y is : " + Math.cbrt(y));
        System.out.println("Power of x and y is: " + Math.pow(x, y));
        System.out.println("Logarithm of x is: " + Math.log(x));
        System.out.println("Logarithm of y is: " + Math.log(y));
        System.out.println("log10 of x is: " + Math.log10(x));
        System.out.println("log10 of y is: " + Math.log10(y));
        System.out.println("log1p of x is: " + Math.log1p(x));
        System.out.println("exp of a is: " + Math.exp(x));
        System.out.println("expm1 of a is: " + Math.expm1(x));
    }

    public static void trignometry(double x) {
        System.out.println("Radian is : " + Math.toRadians(x));
        System.out.println("Sine value of a is: " + Math.sin(x));
        System.out.println("Cosine value of a is: " + Math.cos(x));
        System.out.println("Tangent value of a is: " + Math.tan(x));
        System.out.println("Sine value of a is: " + Math.asin(x));
        System.out.println("Cosine value of a is: " + Math.acos(x));
        System.out.println("Tangent value of a is: " + Math.atan(x));
        System.out.println("Sine value of a is: " + Math.sinh(x));
        System.out.println("Cosine value of a is: " + Math.cosh(x));
        System.out.println("Tangent value of a is: " + Math.tanh(x));
        System.out.println("Degree of " + x + " is = " + Math.toDegrees(x));
    }

    public static void multipleArray(int arr[][]) {

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.println("arr[" + i + "]" + "[" + j + "] = " + arr[i][j]);
            }
        }

    }

    public static void singleArray(int arr[]) {

        for (int i = 0; i < arr.length; i++) {
            System.out.println("arr[" + i + "] = " + arr[i]);
        }

    }

    public static int makeSum(int... arr) {
        int result = 0;
        for (int tempVar : arr) {
            result += tempVar;
        }
        return result;
    }

    public static void allString(String s) {

        if (s.length() >= 5) {
            System.out.println("Entered String : " + s);
            System.out.println("Character on the index of 0 : " + s.charAt(0));
            System.out.println("length of String is : " + s.length());
            System.out.println("Sub String : " + s.substring(0, 4));
            System.out.println("string contain 'A' = " + s.contains("A"));
            System.out.println("String  is similar to AGPIT : " + s.equals("AGPIT"));
            System.out.println("Is String Empty : " + s.isEmpty());
            System.out.println("Concatination : " + s.concat(" :) "));
            System.out.println("replace A as B : " + s.replace("A", "B"));
            System.out.println("Ignore String Cases : " + s.equalsIgnoreCase("Agpit"));
            System.out.println("index of G : " + s.indexOf("G"));
            System.out.println("Upercase : " + s.toUpperCase());
            System.out.println("LowerCase : " + s.toLowerCase());
            System.out.println(" trim () = " + s.trim());
            System.out.println("valueOf : " + String.valueOf(s));
        } else {
            System.out.println("String length is very small ");
        }

    }

    public static void main(String[] args) {
        int arr[][] = { { 1, 2, 3, 4, 5, 6 }, { 1, 2, 3, 4, 5, 6 } };
        multipleArray(arr);
    }
}
