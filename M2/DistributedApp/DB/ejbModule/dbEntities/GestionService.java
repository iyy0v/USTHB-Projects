package dbEntities;

import java.util.List;

import jakarta.ejb.Stateless;
import jakarta.persistence.EntityManager;
import jakarta.persistence.PersistenceContext;

@Stateless
public class GestionService implements IGestion {
	@PersistenceContext
	EntityManager db;
	public void addService(Service service) {
		db.persist(service);
	}
	
	public Service searchService(int number) {
		return db.find(Service.class, number);
	}
	
	public List<Service> listAllServices() {
		return db.createQuery("SELECT s FROM Server s").getResultList();
	}
	
	public void addServer(InfoServer server) {
		db.persist(server);
	}
	
	public InfoServer searchServer(int number) {
		return db.find(InfoServer.class, number);
	}
	
	public List<InfoServer> listAllServers() {
		return db.createQuery("SELECT s FROM Servers s").getResultList();
	}
}