package dbEntities;

import java.io.Serializable;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name="Servers")
public class InfoServer implements Serializable {
	   @Id
	   @GeneratedValue(strategy = GenerationType.IDENTITY)
	   private int number;
	   private String ip;
	   private int port;
	
	   
	   public InfoServer() {
	      super();
	   }
	   public InfoServer(int port) {
		  this.ip = "127.0.0.1";
	      this.port = port;
	   }
	   public InfoServer(int number, String ip, int port) {
	      this.number = number;
	      this.ip = ip;
	      this.port = port;
	   }
	   
	   public int getNumber() {
		  return number;
	   }
	   
	   public String getIp() {
	      return ip;
	   }
	   
	   public int getPort() {
		  return port;
	   }
	   
	   public void setIp(String ip) {
	      this.ip= ip;
	   }
	   
	   public void setPort(int port) {
	      this.port = port;
	   }
	   
	   public String toString() {
	      return "Server N#" + number + " - " + ip + ":" + port;
	   }
}
