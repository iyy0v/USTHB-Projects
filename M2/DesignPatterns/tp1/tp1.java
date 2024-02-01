package tp1;

import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.Rectangle;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JList;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JPanel;
import javax.swing.JProgressBar;
import javax.swing.JScrollBar;
import javax.swing.JSlider;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.WindowConstants;

public class tp1 {

	public static void main(String[] args) {

		JFrame frame=new JFrame();
		// Closing the window will end the program
		frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

		int dimensionX = 300;
		int dimensionY = 200;
		int locationX = 10;
		int locationY = 40;
		boolean visibility = true;

		// Method 1
		frame.setSize(dimensionX, dimensionY);
		frame.setLocation(locationX, locationY);
		frame.setTitle("TP1");
		frame.setVisible(visibility);

		// Method 2
		Rectangle rect = new Rectangle(locationX*2, locationY*2, dimensionX*2, dimensionY*2);
		frame.setBounds(rect);


        Container container = frame.getContentPane();
        container.setLayout(new BorderLayout());

        JButton button = new JButton("Button 1");
        JButton button2 = new JButton("Button 2");
        JButton button3 = new JButton("Button 3");

        JPanel Panel = new JPanel();

        Panel.add(button);


        // ------------------------------------------------------
        class Handler implements ActionListener
		{
			@Override
			public void actionPerformed(ActionEvent e) {
				System.out.println("Click! ");
			}
		}

		class SecondHandler extends MouseAdapter
		{
			@Override
			public void mouseEntered(MouseEvent e) {
				System.out.println("Entered the button [Extend]");
			}

			@Override
			public void mouseExited(MouseEvent e) {
				System.out.println("Exited the button [Extend]");
			}
		}

        Handler handler =new Handler();
        SecondHandler handler2 = new SecondHandler();

        button.addActionListener(handler);
        button.addMouseListener(handler2);

        // ------------------------------------------------------

        JList list = new JList();
        Object[] listData = new Object[]{"Jax", "Anne", "Teemo"};
        list.setListData(listData);
        Panel.add(list);

        JScrollBar scroll = new JScrollBar();
        Panel.add(scroll);

        JSlider slider = new JSlider();
        Panel.add(slider);

        JProgressBar progress = new JProgressBar(0, 100);
        progress.setValue(30);
        Panel.add(progress);

        JTextField text = new JTextField("This is just a text.");
        Panel.add(text);

        JTextArea textarea = new JTextArea("This is just a textarea.");
        Panel.add(textarea);

        JMenuBar menuBar = new JMenuBar();
        JMenu menu = new JMenu("Menu");
        JMenuItem item1 = new JMenuItem("Item 1");
        menu.add(item1);
        JMenuItem item2 = new JMenuItem("Item 2");
        menu.add(item2);
        menuBar.add(menu);
        Panel.add(menuBar);


        frame.add(Panel);
        frame.setJMenuBar(menuBar);
	}
}
