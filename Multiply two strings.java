    public String multiplyStrings(String s1,String s2)
    {
        //code here.
BigInteger a= new BigInteger(s1);
BigInteger b=  new BigInteger(s2);
b=b.multiply(a);
return b.toString();
        
    }
