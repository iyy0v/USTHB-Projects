package tp2;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class SourceCodeExtractor {
    
    public static String extractSourceCode(Class<?> clazz, String methodName) throws IOException {
        // Get the source file path for the class
        String sourceFilePath = getSourceFilePath(clazz);

        // Read the source file and extract the code for the method
        BufferedReader reader = new BufferedReader(new FileReader(sourceFilePath));
        StringBuilder sourceCode = new StringBuilder();
        String line;
        boolean inMethod = false;
        while ((line = reader.readLine()) != null) {
            if (inMethod) {
                if (line.trim().startsWith("}")) {
                    break;
                } else {
                    sourceCode.append(line).append("\n");
                }
            } else if (line.contains(methodName)) {
                inMethod = true;
            }
        }
        reader.close();

        return sourceCode.toString();
    }

    private static String getSourceFilePath(Class<?> clazz) {
        String classFilePath = clazz.getSimpleName() + ".class";
        String classPath = clazz.getResource(classFilePath).getPath();
        String sourcePath = classPath.replace("/bin/", "/src/").replace("%20", " ").replace(".class", ".java");
        return sourcePath;
    }

    public static void main(String[] args) throws IOException {
        String sourceCode = extractSourceCode(SourceCodeExtractor.class, "extractSourceCode");
        System.out.println(sourceCode);
    }

}