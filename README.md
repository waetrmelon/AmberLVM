<a name="readme-top"></a>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <img src="images/logo.png" alt="Logo" width="120" height="50">
</a>

<h3 align="center">The Amber LVM</h3>

  <p align="center">
    Amber is a Language Virtual Machine (ALVM) meant to execute Amber Byte Code abbriviated as "ABC", written in C++.
    <br />
    <a href="https://github.com/github_username/repo_name"><strong>Explore the docs »</strong></a>
    <br />
    <br />
  </p>
</div>


<!-- ABOUT THE PROJECT -->
<h2 align="center">About The Project</h2>

<p align="center">Amber is a Language Virtual Machine meant to execute Amber Byte Code, similar to how the JVM (Java Virtual Machine) executes bytecode, this project will serve as a base for me to write several compilers and interpreters to run on the ALVM (Amber Language Virtual Machine) for compatability across several architectures, meaning you can write a compiler for ALVM any Programming Language by compiling to  Bytecode, avoiding the use of Compiler Toolchains. eg LLVM.</p>




### Built With:
 <img src="https://skillicons.dev/icons?i=cpp&perline=14" />




<!-- GETTING STARTED -->
## Getting Started

This is an example of how you may give instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.

### Installation

1. The Amber Virtual Machine is currently not avaliable for download.




<!-- USAGE EXAMPLES -->
## Usage of Amber Byte Code

   ```c
$ = Register

load $1 int32 32 -> Load 32 into Register 1
load $1 int32 2 -> Load Register 2 into Register 1

jmp int32 2 -> Jump to line 2

cmp $1 $2 -> Comparison of Register 1 and 2, Stores either 0 or 1 in $0 

je $1 $2 -> Jump Equals
jne $1 $2 -> Jump Not Equals

jg $1 $2 -> Jump Greater Than
jl $1 $2 -> Jump Less Than

jge $1 $2 -> Jump Greater Than Equals To
jle $1 $2 -> Jump Less Than Equals To

start .main
	load $0 int32 32
end .main
   ```

_For more examples, please refer to the [Documentation](https://example.com)_





<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request




<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.



<!-- CONTACT -->
## Contact

waetrmelon - @waetrmelon on GitHub & Discord.


<p align="right">(<a href="#readme-top">back to top</a>)</p>
   