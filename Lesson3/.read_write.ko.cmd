savedcmd_/home/vinicius/Desktop/LinuxDriverLearning/Lesson3/read_write.ko := ld -r -m elf_x86_64 -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T arch/x86/module.lds -o /home/vinicius/Desktop/LinuxDriverLearning/Lesson3/read_write.ko /home/vinicius/Desktop/LinuxDriverLearning/Lesson3/read_write.o /home/vinicius/Desktop/LinuxDriverLearning/Lesson3/read_write.mod.o;  make -f /usr/src/linux-headers-6.5.0-kali3-common/arch/x86/Makefile.postlink /home/vinicius/Desktop/LinuxDriverLearning/Lesson3/read_write.ko