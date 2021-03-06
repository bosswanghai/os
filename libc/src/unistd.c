#include <system.h>
#include <stdint.h>

void _exit(uint64_t status)
{
	syscall(SYS_EXIT, status, 0 , 0);
}

uint64_t close(uint64_t fd)
{
	return syscall(SYS_CLOSE, fd, 0, 0);
}

uint64_t read(uint64_t fd, void *buf, uint64_t count)
{
	return syscall(SYS_READ, fd, (uint64_t)buf, count);
}

uint64_t write(uint64_t fd, void *buf, uint64_t count)
{
	return syscall(SYS_WRITE, fd, (uint64_t)buf, count);
}

uint64_t fork(void)
{
	return syscall(SYS_FORK, 0, 0, 0);
}

uint64_t execve(uint8_t *path, uint8_t **arg, uint8_t **env)
{
	return syscall(SYS_EXECVE, (uint64_t)path, (uint64_t)arg, (uint64_t)env);
}

void *sbrk(uint64_t size)
{
	return (void*)syscall(SYS_SBRK, size, 0, 0);
}

uint64_t getpid()
{
	return syscall(SYS_GETPID, 0, 0, 0);
}

uint64_t wait(uint64_t *status)
{
	return syscall(SYS_WAIT, (uint64_t)status, 0, 0);
}

uint64_t usleep(uint64_t usec)
{
	return syscall(SYS_USLEEP, (uint64_t)usec, 0, 0);
}
