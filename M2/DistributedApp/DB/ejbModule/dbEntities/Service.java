package dbEntities;

import java.io.Serializable;

import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name="Services")
public class Service implements Serializable {
	 @Id
	   private int number;
	   private String name;
	   private String description;
	
	   
	   public Service() {
	      super();
	   }
	   public Service(int number) {
	      this.number = number;
	   }
	   public Service(int number, String name, String description) {
	      this.number = number;
	      this.name = name;
	      this.description = description;
	   }
	   
	   public int getNumber() {
		  return number;
	   }
	   
	   public String getName() {
	      return name;
	   }
	   
	   public void setNumber(int number) {
		      this.number = number;
	   }
	   
	   public void setName(String name) {
	      this.name = name;
	   }
	   
	   public String getDescription() {
	      return description;
	   }
	   public void setDescription(String description) {
	      this.description = description;
	   }
	   
	   public String toString() {
	      return "Service N#" + number + " - " + name + "\n Description: " + description;
	   }
}
