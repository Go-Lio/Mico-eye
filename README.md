# Mico-eye
Person detect ,based on CNN ,running on Cortex-M7 platform  
## LTO
Since GCC10's release, ```-flto```option have became available, we can use it to compress binnary file's size.And the larger your project is, the bigger difference will be made.  

How to enable LTO(link-time optimization)in a cmake project?  
```cmake
-G Ninja -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra" 
-DLLVM_TARGETS_TO_BUILD=X86 
-DCMAKE_C_FLAGS=”-flto” 
-DCMAKE_CXX_FLAGS=”-flto”
```
add this to your cmake option.  
More info :https://blog.jetbrains.com/clion/2022/05/testing-3-approaches-performance-cpp_apps/#Conclusions
