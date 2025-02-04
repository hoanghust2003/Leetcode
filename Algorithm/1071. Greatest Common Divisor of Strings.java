class GCDS {
  public String gcdOfStrings(String str1, String str2) {
      // step 1 To check the string has GCD 
      if (!(str1 + str2).equals(str2 + str1)) {
          return "";
      }
    // step2 To find the length of Str1, Str2 in number
      int length1 = str1.length();
      int length2 = str2.length();

   // Step3  to get the gcd of string 
      while (length2 != 0) {
          int temp = length2;
          length2 = length1 % length2;
          length1 = temp;

      }
  // Step to print the gcd by giving the index of string start and ending 
      return str1.substring(0, length1);
  }

  public static void main(String[] args) {
      GCDS a = new GCDS();
      String result = a.gcdOfStrings("ABABAB", "ABAB");
      System.out.println("Output: " + result);

  }
}