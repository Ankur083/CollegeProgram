class DuplicateEntryException extends Exception {
    public DuplicateEntryException(String message) {
        super(message);
    }
}


 class EmployeeManager {
   final String[] existingEmployeeIds = new String[100]; 
    private int count = 0;

    public void addEmployee(String employeeId, String name) throws DuplicateEntryException {

        for (int i = 0; i < count; i++) {
            if (existingEmployeeIds[i].equals(employeeId)) {
                throw new DuplicateEntryException("Employee with ID '" + employeeId + "' already exists.");
            }
        }
        existingEmployeeIds[count++] = employeeId;
        System.out.println("Employee '" + name + "' added successfully.");
    }
}

public class customException {
        public static void main(String[] args) {
            EmployeeManager manager = new EmployeeManager();

            try {
                // Add employees
                manager.addEmployee("E1", " Ankur Raj ");
                manager.addEmployee("E2", " Sanjog ");
                manager.addEmployee("E1", " Johnson ");
            }
            catch (DuplicateEntryException e) {
                System.out.println(e.getMessage());
            }
        }
}

