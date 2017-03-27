import java.net.*;
import java.io.*;
class A{
	public static void main(String[] args){
		int ch;
		try{
			InetAddress address=InetAddress.getByName("www.baidu.com");
			System.out.println("address:"+address.getHostAddress());
			Socket socket=new Socket("www.baidu.com",80);
			InputStream in=socket.getInputStream();
			OutputStream out=socket.getOutputStream();
			String str="GET /index.html HTTP/1.0"+"\r\n"+"Host:www.baidu.com"+"\r\n"+"\r\n";
			byte[] buf=str.getBytes();
			for(int i=0;i<buf.length;i++){
				System.out.print((char)buf[i]);
			}
			out.write(buf);
			System.out.println("all right");
			while((ch=in.read())!=-1){
				System.out.print((char) ch);
		}
		}
		catch(UnknownHostException exc){
			System.out.println(exc);
		}
		catch(IOException exc){
			System.out.println(exc);
		}
	}
}

