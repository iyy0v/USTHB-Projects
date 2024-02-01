package dbEntities;

import java.util.List;

import jakarta.ejb.Remote;
import jakarta.faces.component.UIViewAction;

@Remote
public interface IGestion {
	public void addService(Service service);
	public void addServer(InfoServer server);
	public Service searchService(int number);
	public InfoServer searchServer(int number);
	public List<Service> listAllServices();
	public List<InfoServer> listAllServers();
}
