package servers;

import java.rmi.Remote;
import java.rmi.RemoteException;

import dbEntities.Service;

public interface InterfaceInterRMI extends Remote {
	Service requestService(String request) throws RemoteException;
}
