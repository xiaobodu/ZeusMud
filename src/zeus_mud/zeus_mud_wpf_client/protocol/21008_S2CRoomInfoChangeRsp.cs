//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: 21008_S2CRoomInfoChangeRsp.proto
namespace Protocol
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"S2CSRoomInfoChangeRsp")]
  public partial class S2CSRoomInfoChangeRsp : global::ProtoBuf.IExtensible
  {
    public S2CSRoomInfoChangeRsp() {}
    
    private uint _id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public uint id
    {
      get { return _id; }
      set { _id = value; }
    }

    private string _room_name = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"room_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string room_name
    {
      get { return _room_name; }
      set { _room_name = value; }
    }

    private uint _player_count = default(uint);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"player_count", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(uint))]
    public uint player_count
    {
      get { return _player_count; }
      set { _player_count = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}