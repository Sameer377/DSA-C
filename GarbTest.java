class GrabTest{
static int a=1;
protected void finalize(){
System.out.println(a);
a++;
}
public static void main(String [] ar){
GrabTest g1,g2;
g1=new GrabTest();
g2=new GrabTest();

g1=null;
g2=g1;
new GrabTest();

System.gc();

}
}