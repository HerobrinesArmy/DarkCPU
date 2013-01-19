#pragma once

#include "FileEntry.h"

#include <vector>

namespace DarkOsFormat
{

class DirectoryEntry
{
private:
	std::string								m_sDirectoryName;
	std::vector<const DirectoryEntry>		m_directories;
	std::vector<const FileEntry>			m_files;

public:
	DirectoryEntry();
	DirectoryEntry(const std::string& sDirectoryName);

	void addFile(const FileEntry& file);
	void addDirectory(const DirectoryEntry& directory);
	const std::vector<const DirectoryEntry>& getDirectories() const;
	const std::vector<const FileEntry>& getFiles() const;
	unsigned long DirectoryEntry::getSize() const;
	const std::string& getName() const;
};

};