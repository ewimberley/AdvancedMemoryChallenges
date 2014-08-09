AdvancedMemoryChallenges
========================

Advanced buffer overflow and memory corruption challenges.

INSTRUCTIONS:

1. Install gcc 4.8 or above (I recommend a late version of Ubuntu. I haven't really tested these on CentOS, but they should work. All other systems and all bets are off.)
2. Run the command "make" in the main project directory
3. Try to get each program to pop a shell (or change the control flow to your advantage in some way) 
without modifying the source code. You can try to execute some shell code, but that's the old boring 
way to do things. Look for something else.
4. Profit?

For some spoilers read:

http://packetstormsecurity.com/files/121751/Modern-Overflow-Targets.html

or 

http://packetstormsecurity.com/files/123977/Bypassing-AddressSanitizer.html

**********************************************************************************
*********************************Spoilers below!**********************************
**********************************************************************************
**********************************************************************************
**********************************************************************************
**********************************************************************************
**********************************************************************************
**********************************************************************************

Hints and Challenge Description
1. Stack Objects - Did you know you could put objects on the stack? -fstack-protector-all prevents you from writing over the stored instruction pointer, but that doesn't mean it prevents *all* buffer overflows on the stack. Just don't write over the canary...
2. Heap Objects - Overflowing is a little bit different on the heap. Metadata checks will test the linked list pointers used to maintain allocations. If you free/delete after a heap overflow on modern clib you're likely to get a segfault.
3. Canary Conundrums - Oh no! The target is on the other side of a canary from the vulnerable buffer! When function a returns there's bound to be a segfault. If function a returns...
4. Integer Behavior - Hmm, it looks like there's some careful sanitization on that integer input. How does that ALU thing work again? Plus, this was compiled with AddressSanitizer. One wrong byte and it'll be a segfault.
5. Heap Havoc - In the real world the heap is constantly changing. Challenge number 2 is pretty trivial compared to this one.
6. AddressSanitizer Woes - AddressSanitizer is extremely carefully thought out. It was very challenging to balance improved security without breaking backwards compatibility. Sometimes, all it takes is a few corrupted bytes to pop a shell. That's good, because AddressSanitizer doesn't give you all that many bytes to work with.

More to come later...
