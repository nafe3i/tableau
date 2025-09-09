# Copilot Instructions for `chaine de caractere` Codebase

## Overview
This codebase contains a series of C programs (`chall1.c` to `chall6.c`) that are compiled into executables located in the `output/` directory. Each program appears to be a standalone challenge or task, likely related to string manipulation or similar operations.

## Key Directories and Files
- **Source Files**: `chall1.c`, `chall2.c`, ..., `chall6.c` - Each file contains a separate C program.
- **Output Directory**: `output/` - Contains the compiled executables (`chall1.exe`, `chall2.exe`, etc.).

## Build and Run Workflow
To compile and run the programs:
1. Use a C compiler like `gcc` to compile the source files. Example:
   ```bash
   gcc chall1.c -o output/chall1.exe
   ```
2. Run the compiled executable. Example:
   ```bash
   ./output/chall1.exe
   ```

### Batch Compilation
To compile all programs at once, you can use a script or run the following commands:
```bash
gcc chall1.c -o output/chall1.exe
gcc chall2.c -o output/chall2.exe
...
gcc chall6.c -o output/chall6.exe
```

## Project-Specific Conventions
- **File Naming**: Each challenge is named sequentially (`chall1.c`, `chall2.c`, etc.).
- **Output Location**: All executables are stored in the `output/` directory.
- **Standalone Programs**: Each `.c` file is independent and does not rely on shared code or libraries within the project.

## Debugging Tips
- Use `gcc` with debugging flags to enable detailed error messages:
  ```bash
  gcc -g chall1.c -o output/chall1.exe
  ```
- Use a debugger like `gdb` to step through the code:
  ```bash
  gdb output/chall1.exe
  ```

## Suggestions for AI Agents
- When adding new challenges, follow the naming convention (`chall7.c`, `chall8.c`, etc.).
- Ensure all new executables are placed in the `output/` directory.
- Document any unique logic or algorithms in comments within the `.c` files.

## Example Patterns
### Basic Compilation
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
Compile with:
```bash
gcc example.c -o output/example.exe
```

### String Manipulation
```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Hello, World!";
    printf("Length: %lu\n", strlen(str));
    return 0;
}
```

## Future Enhancements
- Consider adding a `Makefile` to simplify the build process.
- Add comments to each challenge file to describe its purpose and functionality.
