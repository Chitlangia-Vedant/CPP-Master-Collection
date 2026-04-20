# File Management Tool - C++

## Description

This is a simple C++ console application that demonstrates basic file-handling operations:
- Writing to a text file
- Reading from a text file
- Appending content to an existing file

## File Structure

- `file_management.cpp`: The main source file.
- `example.txt`: Gets created during execution.
- `.gitignore`: Prevents accidental commits of temporary files.

## Compilation

To compile this project using `g++`:

```bash
g++ file_management.cpp -o file_management
```
## Running the Program

```bash
./file_management
```

After execution, you will see:
- File contents printed to the terminal
- An updated example.txt file with the new appended line

## Output Example

Contents of example.txt:
```
Hello, this is a test!
This is line 2 of the file.
```
Contents of example.txt after appending:
```
Hello, this is a test!
This is line 2 of the file.
Appending new line to the file.
```

## Concepts Demonstrated

- ofstream, ifstream, and fstream
- File modes: write (ios::out), append (ios::app), and read (ios::in)
- Error checking using if (!file)

## Clean up

To remove the generated executable and example file:

```bash
rm file_management example.txt
```


