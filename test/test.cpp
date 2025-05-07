#include <unity.h>
#include <StoragePartitionManager.h>

TEST_CASE("getConf", "[PMW-StoragePartitionManager]")
{
    StoragePartitionManager::getConf();
    TEST_ASSERT_TRUE(true);
}
