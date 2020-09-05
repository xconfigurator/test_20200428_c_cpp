# @author liuyang
# @since 2020/9/6
# Remove-Item ./02/00/*.exe -Recurse -Force

$targetFolder = "."
$files = Get-ChildItem $TargetFolder -Recurse -Include *.exe
# Write-Output $files

foreach ($file in $files) {
  #Write-Output $file.FullName
  if ($file -is [System.IO.FileInfo]) {
    #Write-Output $file
    #Write-Output $file.FullName
    Remove-Item -Path $file.FullName -Force
  } 
}