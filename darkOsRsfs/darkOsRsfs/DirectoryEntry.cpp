#include "stdafx.h"
#include "DirectoryEntry.h"

using namespace DarkOsFormat;

DirectoryEntry::DirectoryEntry(const std::string& sDirectoryName)
{
	m_sDirectoryName = sDirectoryName;
}

DirectoryEntry::DirectoryEntry()
{
	m_sDirectoryName = std::string();
}

void DirectoryEntry::addFile(const FileEntry& file)
{
	m_files.push_back(file);
}

void DirectoryEntry::addDirectory(const DirectoryEntry& directory)
{
	m_directories.push_back(directory);
}

const std::vector<const DirectoryEntry>& DirectoryEntry::getDirectories() const
{
	return m_directories;
}
	
const std::vector<const FileEntry>& DirectoryEntry::getFiles() const
{
	return m_files;
}

unsigned long DirectoryEntry::getSize() const
{
	return m_files.size() + m_directories.size();
}

const std::string& DirectoryEntry::getName() const
{
	return m_sDirectoryName;
}