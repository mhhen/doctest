/**
 * @file
 * @brief
 * This file declares the public API data types, structures and functions that comprise the CDI log API.
 */

// Doxygen for CDI-LOG
/** @page Log_home_page CDI Log (CDI-LOG) API Home Page
 * @tableofcontents
 *
 * @section Log_arch CDI-LOG Architecture
 */
 
 
/**
 * Send log messages to stderr in addition to log files, if log files are enabled.
 *
 * @param enable Use true to enable, false to disable.
 * @param level Log level to enable output to stderr.
 *
 * @return A value from the CdiReturnStatus enumeration.
 */
int CdiLogStderrEnable(bool enable, int level);
